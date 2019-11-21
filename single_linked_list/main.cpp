#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List paul;
	
	cout <<"Adding: "<< endl;
	paul.AddNode(3);
	paul.AddNode(5);
	paul.AddNode(7);
	paul.AddNode(6);
	paul.AddNode(12);
	paul.AddNode(8);
	paul.PrintList();
	cout <<" "<< endl;
	
	cout <<"Deleting: "<< endl;
	paul.DeleteNode(1);
	paul.DeleteNode(3);
	paul.DeleteNode(5);
	paul.DeleteNode(12);
	cout <<" "<< endl;
	
	paul.PrintList();
	
	
    return 0;
}
