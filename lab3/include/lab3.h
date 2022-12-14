#ifndef OS_LABS_LAB3_H
#define OS_LABS_LAB3_H

#include <vector>
#include <iostream>

using TMatrix = std::vector<std::vector<float>>;

struct TThreadToken {
    std::vector <std::pair<int, int>> coords;
    int counter;
    TMatrix* matrix;
    TMatrix* filter;
    TMatrix* resultMatrix;
};

void CheckingAround(int row, int col, TMatrix &matrix, TMatrix &filter, TMatrix &resultMatrix);

void SummingAround(int row, int col, TMatrix &matrix, TMatrix &filter, TMatrix &resultMatrix, int counter);

void ReadMatrix(TMatrix &matrix);

void WriteMatrix(TMatrix &matrix);

void* DilationRoutine(void* arg);

void* ErosionRoutine(void* arg);

void DilationMatrix(TMatrix &matrix, TMatrix &filter, TMatrix &resultDilation, int threadCount, int counter);

void ErosionMatrix(TMatrix &matrix, TMatrix &filter, TMatrix &resultErosion, int threadCount, int counter);

#endif //OS_LABS_LAB3_HOS_LABS_LAB3_H