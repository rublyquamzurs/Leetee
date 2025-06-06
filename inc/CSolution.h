//
// Created by Sapphire on 2022/7/31.
//

#ifndef LEETEE_CSOLUTION_H
#define LEETEE_CSOLUTION_H

#include <vector>
#include "CStruct.h"
#include <string>
#include <cmath>
#include <iostream>
#include <stack>
#include <algorithm>


template <typename T>
void inline TPrintf(std::vector<T> params) {
    int size = params.size();
    for (T tp : params) {
        std::cout << tp << std::endl;
    }
}

void RunTwoSum();
void RunAddTwoNumbers();
void RunLengthOfLongestSubstring();
void RunFindMedianSortedArrays();
void RunLongestPalindrome();
void RunConvert();
void RunReverse();
void RunMyAtoi();
void RunIsPalindrome();
void RunIsMatch();
void RunMaxArea();
void RunIntToRoman();
void RunRomanToInt();
void RunLongestCommonPrefix();
void RunThreeSum();
void RunThreeSumClosest();
void RunLetterCombinations();
void RunFourSum();
void RunRemoveNthFromEnd();
void RunIsValid();
void RunMergeTwoLists();
void RunRobotWithString();

void RunQuickSort();

class CSolution
{
public:
    CSolution();
    ~CSolution();
};


#endif //LEETEE_CSOLUTION_H
