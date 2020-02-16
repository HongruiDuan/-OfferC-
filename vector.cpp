#include<vector>
#include<cstdio>
#include<iostream>

using namespace std;

//vector 用法

int main(void){
	
	vector<int> vec1(5);//声明初始大小为5的向量
	vector<int> vec2(10,1);//声明初始大小为10，全部为1的向量
//	vector<int> vec3(tmp); //用temp向量初始化vec3
	int arr[5]={1,2,3,4,5};
	vector<int> vec(arr,arr+5);
	vec.push_back(9);
	int count=vec.front();
	cout<<"front:"<<vec.front()<<"back:"<<vec.back()<<endl;
//	cout<<count<<endl;
	vector<int>::iterator it;//先要声明迭代器 
	for(it=vec.begin();it!=vec.end();it++){
		cout<<*it<<endl;
	}
//	cout<<vec.front()<<vec.end();
	return 0;
} 
