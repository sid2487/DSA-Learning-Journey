/*You are given an array of integers pages[] of size n where pages[i] denotes the number of pages in the i-th book. There are m students, and the books are arranged in a linear order.

Your task is to allocate books to students such that:

Each student gets at least one book.

Each book is allocated to exactly one student.

The allocation is contiguous (i.e., books allocated to a student must be a continuous subarray).

You need to minimize the maximum number of pages assigned to a student.

solution: the range of no line(max no of book allocation) line should be from max no of pages(max in array) to the total no pages.
eg: [10, 20, 30, 40] so here the range should be from 40 to 100
find the mid(50 mtlb ek bacha max to max 50 pages pdhega ) now allocate the book in contagious manner by keeping the conditon that max no of pages should be 50, if allocation allows you this in the given no of stuendts then keep that as one of your answer(if got the answer then store it and now we have to minimize that answer, so we go left) otherwise cancel it , its not our answer(now we have to move, since we have to inc the capacity of pages then we will go right side )

TC: O(n * log(sum of pages))
O(1) auxiliary space
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &pages, int m, int maxPages){
    int student = 1;
    int sum = 0;

    for(int i=0; i<pages.size(); i++){
        if (pages[i] > maxPages) return false;

        sum = sum + pages[i];
        if(sum > maxPages){
            student++; // incrase the students or you can say start a new student
            sum = pages[i]; // assign the current book to this new student
        }

        if(student > m){
            return false;
        }
    }
    return true;
    
}

int allocateBooks(vector<int> &pages, int m){
    int n = pages.size();
    if(m>n) return -1; // more students than books,not possble.

    // give the iterator of the largest element in the array but * using this gives the actual value.
    int start = *max_element(pages.begin(), pages.end()); 
    int end = accumulate(pages.begin(), pages.end(), 0);
    int result = end;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(isPossible(pages, m, mid)){
            result = mid; // pssble solution, try to minimize it
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int main(){

    vector<int> pages = {10, 20, 30, 40};
    int m = 2; // no of students

    int answer = allocateBooks(pages, m);
    cout << "Minimum of maximum pages assigned to a student: " << answer << endl;

    return 0;
}