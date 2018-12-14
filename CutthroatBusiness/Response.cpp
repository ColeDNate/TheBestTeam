
#include "pch.h"
#include "Response.h"
#include <iostream>

using namespace std;


Response::Response(){
	setType(Response::Type::Angry);
}

Response::Response(Type type, string text){
	setType(type);
	setText(text);
}

void Response::setText(string text) {
	this->text = text;
}
string Response::getText() {
	return text;
}

void Response::setType(Type type) {
	this->type = type;
}
Response::Type Response::getType() {
	return type;
}

bool Response::compareOtherType(Response other) {
	if (type == other.getType()) {
		return true;
	}
	else {
		return false;
	}
}