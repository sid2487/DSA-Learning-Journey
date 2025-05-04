#include <bits/stdc++.h>;
using namespace std;

void recursiveFunction(){
    recursiveFunction();
}

int main(){
    // recursiveFunction();
    return 0;
}

// When a program runs, it uses different types of memory for storing data, such as stack memory and heap memory.

// The stack is a special area of memory used to store information about function calls(like local variables and return addresses) while the program is running.

// When a function is called, a stack frame is created to hold its local variables and where to return after the function finishes.When the function finishes, the stack frame is removed.

// It can be prevented by making sure that recursion has a base case to stop, or by using iteration instead of recursion if possible.

// When a stack overflow happens, the program crashes because it exceeds the available memory allocated for the stack.



// Think of the stack as a small table where items are stacked and removed in a last - in - first - out order(like a stack of plates).Once a plate(function call) is done, it's automatically removed.

//     On the other hand,
//     the heap is like a large storage room where you can place and remove items as you need.You can decide exactly where to place items and when to remove them, but you must also remember to clean up the room by removing the items yourself when you're done. If you forget to clean up, the room will get cluttered with unused items — this is like a memory leak.  