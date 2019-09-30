/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
*  youngjon
*/ 
#include <iostream>
#include "Selection_Sort.h"
#include "Sort.h"

	//performs Selection Sort
	void Selection_Sort::sort( int arrays[],int length){
		//move through array
		for (int i = 0; i < length - 1; i++){
			int min = i;
			//find minimum
			for(int n = i + 1; n < length; n++){
				if(arrays[n] < arrays[min]){
					//save minimum
					min = n;
				}
			}
			//swap minimum & replace spot with bigger value
			int save = arrays[min];
			arrays[min] = arrays[i];
			arrays[i] = save;
			
		}
		//prints Sort results in Ascending order
		std::cout<<"Selection Sort:";
		for(int r = 0; r < length; r++){
			if(r < length - 1){
				std::cout<< " ";
				std::cout<< arrays[r];
				std::cout<< ",";
			} else if (r == length - 1){
				std::cout<< " ";
				std::cout<< arrays[r];
				std::cout<< std::endl;
			}
		}
	}