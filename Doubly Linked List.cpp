#include <iostream>
#include <string>
using namespace std;

struct Song
{
	string title;
	song next;
	song prev;
	
	song(string t)
	{
		title = t;
		next = NULL;
		prev = NULL;
	}
}

class playlist
{
	private:
		song * head;
		song * tail;
		song * current;
		
	public:
		playlist()
		{
			head = tail = current = NULL;
		}
}

void addsong(string title)
{
	song * newSong = new song (title);
	
	if (head == NULL)
	{
		head = tail = current = newSong;
	}
	
	else 
	{
		tail->next = newSong;
		newSong->prev = tail;
		tail = newSong;
	}
}

void nextsong()
{
	if (current != NULL && current->next != NULL)
	{
		current = current->next;
		cout<<"playing :"<< current->title << endl;
	}
	
	else
	{
		cout << "This is Last Song. \n";
	}
}

void previousSong()
{
	 if (current != NULL && current->prev != NULL) 
	 {
	 	current = current->prev;
	 	cout<<"Playing : "<< current->title << endl;
	 }
	 
	 else 
	 {
	 	cout<<"This is First Song. /n";
	 }
}

void displayForward()
{
	song * temp = head;
}







