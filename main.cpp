#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	void getInfo() {
		cout << "Name :" << Name << endl;
		cout << "OwnerName :" << Name << endl;
		cout << "SubscribersCount :" << Name << endl;
		cout << "Videos :" << Name << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
};

int main()
{
	YouTubeChannel ytChannel("CodeBeauty", "Jolly");
	ytChannel.PublishedVideoTitles.push_back("C++ for beginners");

	ytChannel.getInfo();

	system("pause>0");
}
