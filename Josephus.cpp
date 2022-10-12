//Question 1
// There are N people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed
// direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the 
// circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. 

// Given the total number of persons N and a number k which indicates that k-1 persons are skipped and the kth person is killed in a circle.
//   The task is to choose the person in the initial circle that survives.


#include <bits/stdc++.h>

using namespace std;

void Josh(vector<int> person, int k, int index)
{

	if (person.size() == 1) {
		cout << person[0] << endl;
		return;
	}

	// find the index of first person which will die
	index = ((index + k) % person.size());

	// remove the first person which is going to be killed
	person.erase(person.begin() + index);

	
	Josh(person, k, index);
}

int main()
{
	int n = 14; 
	int k = 2;
	k--; 
	int index
		= 0; 

	vector<int> person;
	// fill the person vector
	for (int i = 1; i <= n; i++) {
		person.push_back(i);
	}

	Josh(person, k, index);
}
