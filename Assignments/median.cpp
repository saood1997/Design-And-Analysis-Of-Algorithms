#include <iostream>
using namespace std;

void med(){
	int i,size,num,num1,j,size1,size2;
	int median;
	cout<<"Enter size of the array"<<endl;
	cout<<"Enter size of the array1"<<endl;
	cout<<"Enter size of the array2"<<endl;
	cin>>size;
	cin>>size1;
	cin>>size2;
	int main[size];
	int array[size1]; //= {80,85,86,87,100};
	int array1[size2]; //= {2,60,69,70,86};
	for(i = 0;i<size1;i++){
		cin>>array[i];
	}
	for(i = 0;i<size2;i++){
		cin>>array1[i];
	}
	num = num1 = j = 0;
	for(int i = 0; i < size; i++){
		if(num<=size1 || num1<=size2){
			if(num == size1){
				main[i] = array[num1];
				num1++;
			}
			else if(num1 == size2){
				main[i] = array1[num];
				num++;
			}
			else if(array1[num]<array[num1]){
				main[i] = array1[num];
				num++;
			}
			else if(array1[num] == array[num1]){
				main[i] = array1[num];
				if(num>num1){
					num1++;
				}
				else{
					num++;
				}
			}
			else if(array1[num]>array[num1]){
				main[i] = array[num1];
				num1++;
			}
		}
	}

	int *ptr,*temp;
	ptr = main;
	temp = main;
	for(int i = 0;i<size-1;i++){
		ptr++;
	}
	for(int i = 0; i <= size/2; i++){
		ptr--;
		temp++;
	}
	if(*ptr == *temp){
		cout<<"median "<<*ptr<<endl; 
	}
	else{
		ptr++;
		temp--;
		cout<<"median "<<*ptr<<" "<<*temp<<endl;

	}
	cout<<"main array"<<endl;
	for (int J = 0; J < 10; J++)
	{
		cout<<main[J]<<" ";
	}
}
int main(){
	med();
}

