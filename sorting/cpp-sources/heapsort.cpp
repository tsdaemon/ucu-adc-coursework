#include <iostream>
#include <vector>
#include <ctime>

#include "declaration.h"
#include "heapsort.h"

algorithmPerformance heapsort(std::vector<double> vectorWithData) {
    algorithmPerformance perfomance;

    perfomance.records = vectorWithData.size();

    std::clock_t begin = std::clock();

    heapsort_algorithm(vectorWithData, cmp);

    double elapsed_secs = double(clock() - begin) / CLOCKS_PER_SEC;
    std::cout << "TIME(sec): " << elapsed_secs << std::endl << std::endl;

    perfomance.time = elapsed_secs;

    return perfomance;
    //std::cout << "TIME(sec): " << elapsed_secs << std::endl << std::endl;

}

algorithmPerformance heapsort(std::vector<date> vectorWithData) {
    algorithmPerformance perfomance;

    perfomance.records = vectorWithData.size();

    std::clock_t begin = std::clock();

    heapsort_algorithm(vectorWithData, compare_dates);

    double elapsed_secs = double(clock() - begin) / CLOCKS_PER_SEC;
    std::cout << "TIME(sec): " << elapsed_secs << std::endl << std::endl;

    perfomance.time = elapsed_secs;

    return perfomance;
}
