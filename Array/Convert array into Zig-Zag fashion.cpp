// Convert array into Zig-Zag fashion
// question Link :- https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1

void zigZag(int arr[], int n) {
        // code here
        for(int i=0;i<n-1;i++){
            if(i%2!=0){
                if(arr[i]<arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
            else{
                if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
        }
    }

//Author Saurav Singh
