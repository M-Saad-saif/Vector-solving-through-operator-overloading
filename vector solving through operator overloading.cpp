#include <iostream>
using namespace std;

class vector {
	private:
		int vecI, vecJ, vecK;

	public:

// default constructors (assigning all variable to 0)
		vector() {
			vecI = 0;
			vecJ = 0;
			vecK = 0;
		}

//constructor we need when te object in main class is parameterize like [vector v1(1,1,1)] othervise we dont need this
		vector(int vecI, int vecJ, int vecK) {
			this->vecI = vecI;
			this->vecJ = vecJ;
			this->vecK = vecK;
		}

//function for taking input for the vector from the user
		void takingInput() {
			cout<<"\nEnter Vector I: ";
			cin>>vecI;

			cout<<"Enter Vector J: ";
			cin>>vecJ;

			cout<<"Enter Vector K: ";
			cin>>vecK;
		}

		void display() {
			cout<< vecI <<"i "<< vecJ <<"j "<< vecK <<"k "<<endl;
		}

//operator overloading for +
		vector operator +(vector vec) {
			vector temp;

			temp.vecI = this->vecI + vec.vecI;
			temp.vecJ = this->vecJ + vec.vecJ;
			temp.vecK = this->vecK + vec.vecK;

			return temp;
		}

//operator overloading for *
		vector operator *(vector vec) {
			vector temp;

			temp.vecI = this->vecI * vec.vecI;
			temp.vecJ = this->vecJ * vec.vecJ;
			temp.vecK = this->vecK * vec.vecK;

			return temp;

		}

};

int main() {
	vector v1, v2, v3, v4;

	v1.takingInput();
	v2.takingInput();

	cout<<"\n1st vector is...";
	v1.display();

	cout<<"2nd vector is...";
	v2.display();

	cout<<"\nthe addition of vetors\n";
	v3 = v1 + v2;
	v3.display();

	cout<<"\nthe multiplication of vectors\n";
	v4 = v1 * v2;
	v4.display();
}
