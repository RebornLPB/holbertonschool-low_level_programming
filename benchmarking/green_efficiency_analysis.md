# Green Efficiency Analysis

## Measurement Methodology
To measure the execution time, I used the standard `<time.h>` library in C and the `clock()` function. I did this in two different ways.
For the first task, I ran the program three times in my terminal. 
I did this to calculate an average time because sometimes the computer is doing other things in the background, and it can change the results.
For the second task, I put the `clock()` functions directly in the code, right before and right after `build_dataset()`, `process_dataset()`, and `reduce_checksum()`. This allowed me to measure each part exactly. I also placed all the `printf` functions at the very end of the code so that the time it takes to print text on the screen does not mess up my total time.

## Observed Performance Differences
My results show a massive difference between the two codes. The Naive version took 0.578724 seconds on average. The Single-pass version was super fast and took only 0.000023 seconds on average.
This means the Naive algorithm is about 24,802 times slower than the Single-pass one! This happens because of big differences in the logic:
- The Naive code uses two loops inside each others, which means its complexity is O(N^2). When the data grows, it has to do way too many calculations. 
- But the Single-pass code only reads the 50,000 numbers once. Its complexity is O(N), so it is much more efficient.

## Relation Between Runtime and Energy Consumption
Execution time is directly linked to energy consumption. When a program runs, the CPU uses electricity to do the calculations.
When the Naive code runs for more than half a second, it forces the processor to work hard and use a lot of power for a long time. This also creates heat. 
But when the Single-pass code runs in less than a millisecond, the CPU finishes almost instantly and can go back to sleep to save energy. 
So, writing better algorithms is not just about making the code faster, it is also a great way to save electricity and reduce the carbon footprint of servers.

## Limitations of the Experiment
This experiment has a few limitations... 
First, I am only using a software function (`clock()`) to guess the energy used. I don't have real hardware tools like a physical wattmeter to see the exact power consumption. 
Second, my computer might be running others apps in the background, which can slightly affect the `clock()` results.
Finally, 50,000 elements is a small test. With millions of data, we might see others problems like memory saturation.

## Practical Engineering Takeaway
The main lesson here is that green computing starts with good code design. You cannot fix a bad algorithm just by buying a faster computer or changing compiler options. Choosing a more clean O(N) algorithm instead of a heavy O(N^2) loop is the best choice a developer can make to create fast software that respects the environment.