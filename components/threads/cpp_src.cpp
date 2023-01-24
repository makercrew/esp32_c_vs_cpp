#include <stdio.h>
#include <thread>
#include <chrono>

void thread2(){
    while (true)
    {
        printf("I'm thread 2\n");
        std::this_thread::sleep_for(std::chrono::seconds{5});
    }
}

void thread3(){
    while (true)
    {
        printf("I'm thread 3\n");
        std::this_thread::sleep_for(std::chrono::seconds{10});
    }
}

void run_thread_test()
{
    std::thread t2(&thread2);
    t2.detach();
    std::thread t3(&thread3);
    t3.detach();
    while (true)
    {
        printf("I'm the C++ Program\n");
        std::this_thread::sleep_for(std::chrono::seconds{2});
    }
}