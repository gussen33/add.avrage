#include <string>
#include <iostream>
#include <vector>

using namespace std;
int addall(const vector<int>& numbers) {
	int add = 0;
	for (int x = 0; x < numbers.size(); ++x) {
		add += numbers[x];
	}
	return add;
}
double getavrage(const vector<int>&numbers){
	if (numbers.size() == 0) { return 0; }

		int add = 0;
		for (int x = 0; x < numbers.size(); ++x) {
			add += numbers[x];
		}
		double avrage = add / numbers.size();
		
		return avrage;
		
	}


int main(){
	vector<int> numbers;
	int count;

	cout << "������ ������:";
	cin >> count;

	cout << "���ڸ� �Է��ϼ���:";
	for (int i = 0; i < count; ++i) {
		int in;
		cin >> in;
		numbers.push_back(in);
		}
	int add = addall(numbers);
	double avrage = getavrage(numbers);

	cout << "����" << add << endl;
	cout << "�����" << avrage << endl;
	
}