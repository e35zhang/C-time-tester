
#include <iostream>
#include <chrono>
#include <cmath>
#include <cstdlib>
typedef std::chrono::high_resolution_clock Clock;



//tested declaration



//tested declaration

int main()
{
    double array[10001];
    double sum = 0;
	for(int i = 0; i <= 10000; i++)
    {
    	auto t1 = Clock::now();

//tested main()






		//tested main()

        auto t2 = Clock::now();
        array[i] = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
        sum += array[i];
    }

	double average = sum/10000-53;
	double standsum = 0;
    for(int i = 0; i <= 10000; i++)
	{
    	standsum += (array[i] - average) * (array[i] - average);
	}
    double standardDeviation = sqrt(standsum/1000);
	std::cout << "The average run time of this program for 10000 times is: " << average
			<< " nanoseconds and the standard deviation is: "<< standardDeviation
			<< "The sum of time is: " << sum <<" nanoseconds"<<std::endl;

}


//tested definition
