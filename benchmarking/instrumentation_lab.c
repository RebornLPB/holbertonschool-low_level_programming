#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return *state;
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

	return sum;
}

int main(void)
{
    clock_t global_start, global_end;
    clock_t build_start, build_end;
    clock_t process_start, process_end;
    clock_t reduce_start, reduce_end;

    unsigned long checksum;

    double total_seconds;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;

    global_start = clock();
    
    build_start = clock();
    build_dataset();
    build_end = clock();
    
    process_start = clock();
    process_dataset();
    process_end = clock();
    
    reduce_start = clock();
    checksum = reduce_checksum();
    reduce_end = clock();
    
    global_end = clock();
	if (checksum == 0ul)
		printf("impossible\n");

	double total_seconds;
	double build_seconds;
	double process_seconds;
	double reduce_seconds;

	printf("TOTAL seconds: %.6f\n", total_seconds);
	printf("BUILD_DATA seconds: %.6f\n", build_seconds);
	printf("PROCESS seconds: %.6f\n", process_seconds);
	printf("REDUCE seconds: %.6f\n", reduce_seconds);
	/* Required output (exact format, no extra lines):
	 * TOTAL seconds: <float>
	 * BUILD_DATA seconds: <float>
	 * PROCESS seconds: <float>
	 * REDUCE seconds: <float>
	 */

	return 0;
}