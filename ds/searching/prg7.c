#include <stdio.h>

//finding the point pt (largest value) using binary search
int findPt(int arr[], int size){
	int start = 0, end = size-1, pt = -1;

	while(pt == -1){

		int mid = (start + end)/2;

		if(arr[mid+1]>arr[mid] && arr[mid]<arr[mid-1]){
			
			if(arr[0]>arr[size-1])		//{8,9,10,1,2,3,4,5,6,7} asending
				pt = mid-1;
			else				//{7,6,5,4,3,2,1,10,9,8}  descending
				pt = mid+1;
		}

		if(arr[0]>arr[size-1]){		//{8,9,10,1,2,3,4,5,6,7} asending
		
			if(arr[mid+1]>arr[mid] && arr[mid]>arr[mid-1]){	  
			
				if(arr[0]>arr[mid])
					end = mid-1;
				else
					start = mid+1;
			}
			if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]){
                	        pt = mid;
               		 }
		}else{

			if(arr[mid+1]<arr[mid] && arr[mid]<arr[mid-1]){	  //{7,6,5,4,3,2,1,10,9,8}  descending
			
				if(arr[size-1]>arr[mid])
					start = mid+1;
				else
					end = mid-1;
			}

			if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]){
				pt = mid;
                	}
		}
	}
	return pt;
}

//search element using binary search
int searchInd(int arr[], int size, int key){
	
	int start = 0, end = size-1;
	int pt = findPt(arr, size);

	if(arr[0]>arr[size-1]){	   //asending
		if(key<arr[size-1])
			start = pt+1;
		else
			end = pt;
		//normal binary search
	        while(start<=end){
        	        int mid = (start + end)/2;

                	if(arr[mid] == key)
                        	return mid;

                	if(arr[mid] > key)
                       		end = mid-1;
	
        	        if(arr[mid] < key)
                	        start = mid+1;
        	}

	}else{
		if(key<arr[size-1])	//decending
			end = pt-1;
		else
			start = pt;

		//normal binary search
		while(start<=end){
			int mid = (start + end)/2;

			if(arr[mid] == key)
				return mid;

			if(arr[mid] < key)
				end = mid-1;

			if(arr[mid] > key)
				start = mid+1;
	
		}
	}

	return -1;
}

void main(){
	int arr1[] = {8,9,10,1,2,3,4,5,6,7};//assending
	
	int arr2[] = {7,6,5,4,3,2,1,10,9,8};//dessending

	printf("%d\n", searchInd(arr1, 10, 4));
	printf("%d\n", searchInd(arr1, 10, 15));
	printf("%d\n", searchInd(arr2, 10, 6));
	printf("%d\n", searchInd(arr2, 10, -5));

}
