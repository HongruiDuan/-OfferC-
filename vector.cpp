#include<vector>
#include<cstdio>
#include<iostream>

using namespace std;

//vector �÷�

int main(void){
	
	vector<int> vec1(5);//������ʼ��СΪ5������
	vector<int> vec2(10,1);//������ʼ��СΪ10��ȫ��Ϊ1������
//	vector<int> vec3(tmp); //��temp������ʼ��vec3
	int arr[5]={1,2,3,4,5};
	vector<int> vec(arr,arr+5);
	vec.push_back(9);
	int count=vec.front();
	cout<<"front:"<<vec.front()<<"back:"<<vec.back()<<endl;
//	cout<<count<<endl;
	vector<int>::iterator it;//��Ҫ���������� 
	for(it=vec.begin();it!=vec.end();it++){
		cout<<*it<<endl;
	}
//	cout<<vec.front()<<vec.end();
	return 0;
} 
