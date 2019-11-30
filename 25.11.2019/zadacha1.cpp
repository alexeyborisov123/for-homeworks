#include <iostream>
#include <vector>
using namespace std;

class list_edge
{
  public:
	int vertex, edge;
	vector <pair <int, int> > list_;

	void input_()
	{
		cin >> vertex >> edge;
		for (int i = 0; i < edge; i++)
		{
			int a, b;
			cin >> a >> b;
			list_.push_back(make_pair(a, b));
		};
	}

	void output_()
	{
		cout << vertex << " ";
		edge = list_.size();
		cout << edge << endl;
		for (int i = 0; i < edge; i++)
		{
			pair<int, int> t = list_[i];
			cout << t.first << " " << t.second << endl;
		};
	}
};

int main()
{
    list_edge A;
    A.vertex = 12;
    A.edge = 28;
    A.list_.push_back(make_pair(0, 1));
    A.list_.push_back(make_pair(0,2));
    A.list_.push_back(make_pair(0,3));
    A.list_.push_back(make_pair(0,4));
    A.list_.push_back(make_pair(0,5));
    A.list_.push_back(make_pair(1,2));
    A.list_.push_back(make_pair(1,3));
    A.list_.push_back(make_pair(1,4));
    A.list_.push_back(make_pair(1,5));
    A.list_.push_back(make_pair(2,3));
    A.list_.push_back(make_pair(2,4));
    A.list_.push_back(make_pair(2,5));
    A.list_.push_back(make_pair(3,5));
    A.list_.push_back(make_pair(3,6));
    A.list_.push_back(make_pair(4,7));
    A.list_.push_back(make_pair(4,8));
    A.list_.push_back(make_pair(5,9));
    A.list_.push_back(make_pair(6,7));
    A.list_.push_back(make_pair(6,10));
    A.list_.push_back(make_pair(6,11));
    A.list_.push_back(make_pair(7,10));
    A.list_.push_back(make_pair(7,11));
    A.list_.push_back(make_pair(8,9));
    A.list_.push_back(make_pair(8,10));
    A.list_.push_back(make_pair(8,11));
    A.list_.push_back(make_pair(9,10));
    A.list_.push_back(make_pair(9,11));
    A.list_.push_back(make_pair(10,11));
    A.output_();
    return 0;
}
