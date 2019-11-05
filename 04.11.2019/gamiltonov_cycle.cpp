#include <iostream>
#include <deque>

using namespace std;

class matrix_adj
{
  public:
	int vertex;
	bool **matrix;

	void input_()
	{
		cin >> vertex;
		matrix = new bool *[vertex];
		for (int i = 0; i < vertex; i++)
		{
			matrix[i] = new bool[vertex];
		};
		for (int i = 0; i < vertex; i++)
		{
			for (int j = 0; j < vertex; j++)
			{
				cin >> matrix[i][j];
			};
		};
	}

	void output_()
	{
		cout << "   ";
		for (int i = 0; i < vertex; i++)
		{
			cout << i << "  ";
		};
		cout << endl << endl;
		for (int i = 0; i < vertex; i++)
		{
			for (int j = -1; j < vertex; j++)
			{
				if (j < 0)
				{
					cout << i << "  ";
					continue;
				};
				cout << matrix[i][j] << "  ";
			};
			cout << endl;
		};
	}
};

void i_find_you (matrix_adj A, deque <int> &B)
{
    int i;

    for (int o = 0; o < A.vertex; o++)
        B.push_back(o);

    for (int k = 0; k < (A.vertex*(A.vertex - 1)); k++)
    {
        if (!(A.matrix[B.at(0)][B.at(1)]))
        {
            i = 2;
            while (!(A.matrix[B.at(0)][B.at(i)]) || !(A.matrix[B.at(1)][B.at(i+1)]))
                i++;
            for (int j = 0; ((2*j) <= (i - 2)); j++)
                swap(B.at(1 + j), B.at(i - j));
        };
        B.push_back(B.front());
        B.pop_front();
    }
}

int main()
{
    matrix_adj A;
    A.input_();
    deque <int> B;

    i_find_you (A, B);

    cout << endl << "This is your matrix" << endl;
    A.output_();
    cout << endl << "This is hamiltonian cycle in your graph:" << endl;
    for(int o = 0; o < A.vertex; o++)
        cout << B.at(o) << " ";
    cout << B.front();
    return 0;
}
