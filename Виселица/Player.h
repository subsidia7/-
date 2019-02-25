#pragma once
#include "main.h"
class Player
{
public:
	Player();//����������� �� ���������
	void sayThanks();//����� �������������
	void sayCurse();//���������
	void decreaseDeathTime();//��������� ����� �� ������
	int getDeathTime();//�������� ����� �� ������
	void die();//�������� ���������
	void drawPart();//���������� ��������� �����
	void toZero();//�������� ���
	~Player();//����������
private:
	HDC hdc = GetDC(GetConsoleWindow());
	void drawFloor();
	void drawHanging();
	void drawHead();
	void drawTile();
	void drawLeftHand();
	void drawRightHand();
	void drawLeftLeng();
	void drawRightLeng();
	COORD phrasePos = { 0,1 };//������� ����
	static const int curseCount = 1;//���������� �����
	static const int thanksCount = 3;//���������� ��������������
	string curses[curseCount] = {"���� �� ��������!!"};
	string thanks[thanksCount] = { "������� ���� �� ������", "���, �������������","������� ������" };
	int deathTime = 9, currentPart = 0;//����� �� ������
	void (Player::*part[9])() = {&Player::drawFloor, &Player::drawHanging, &Player::drawHead, &Player::drawTile, &Player::drawLeftHand, &Player::drawRightHand, &Player::drawLeftLeng, &Player::drawRightLeng, &Player::die };
};

