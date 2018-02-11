#include "Executive.h"
<<<<<<< HEAD

Executive::Executive()
{
}

Executive::~Executive()
{
}

void Executive::AddEvent(std::string eventName, std::time_t eventDate)
{
	events.push_front(Event(eventName, eventDate, currentUser.getName())); //creates an event and adds it to the front of the list
	currentEventIndex = 0; //makes the index of the current event 0 because it is the front of the list
}

void Executive::AddUser()
{
	getCurrentEvent().addUser(currentUser); //adds the current user to the current event
}

void Executive::AddAvailabilities(bool availabilities[])
{
	currentUser.addAvailabilities(availabilities); //passes the avaliabilities on to the user class for handling
	AddUser(); //adds the user to the current event after their avaliabilites are added to them
}

void Executive::checkAvaliabilities()
{
}

void Executive::makeCurrentUser(std::string name)
{
	currentUser = User(name); //makes the current user a new user with the given name
}

void Executive::makeCurrentEvent(int index)
{
	currentEventIndex = index; //replaces the current event index with the new index
}

std::list<Event> Executive::getAllEvents()
{
	events.sort(); //sorts the list before returning it

	return(events); //returns the list of events
}

std::list<Event> Executive::getUserEvents()
{
	std::list<Event> userEvents; //makes an empty list of events that the user is the admin of

	for(std::list<Event>::iterator i = events.begin(); i != events.end(); ++i) //runs through the list of events
	{
		if (currentUser.getName() == i->getAdmin()) //checks if the current user is the admin of the event
		{
			userEvents.push_front(*i); //adds the event to the list of events that the user is the admin of
		}
	}

	userEvents.sort(); //sorts the list before returning it

	return(userEvents); //returns the list of events that the user is the admin of
}

Event Executive::getCurrentEvent()
{
	std::list<Event>::iterator it = events.begin(); //creates the iterator to run through the event list

	for (int i = 0; i != currentEventIndex; i++) //runs through the list until it reaches the current event
	{
		++it;
	}

	return(*it); //returns the event
=======
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <list>

void Executive::write() {
	using namespace std;
	if (events.empty()) {
		return;
	}
	else
	{
		ofstream writeStream("events.txt");
		if (writeStream.is_open()) {
			for (Event e : events) {
				writeStream << "Event: " << e.getName();
				writeStream << "Date: " << e.getDate();
				for (User u : e.users) {
					if (u.isAdmin()) {
						writeStream << "Admin: " << u.getName();
					}
					else {
						writeStream << "User: " << u.getName();
					}
					//times
					for (std::time_t t : u.availabilities) {
						writeStream << "Times: " << t;
					}
				}
			}
			writeStream << "\n";
			writeStream.close();
		}
	}
}
void Executive::read() {
	using namespace std;
	ifstream readStream("events.txt", ifstream::in);
	if (!readStream.is_open()) {
		//for()
		//search events list for events
		//search users vector for users
		//search times will be stored in users as a boolean array

	}
	else
	{
		cout << "failed opening file" << endl;
		return;
	}
>>>>>>> Executive-anna
}