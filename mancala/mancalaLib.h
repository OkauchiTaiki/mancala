#pragma once

//�|�P�b�g�N���X
class Pocket
{
private:
	int stone;	//�΂̐�
public:
	Pocket( int stoneNum = 0 );
	~Pocket();

	//�����Ă���΂̐����擾����
	int GetStoneNum();

	//�΂�ǉ�����
	void AddStoneNum(int num);

};

//���͂����L�[�̎��
enum class KeyID
{
	NONE,	//���͂Ȃ�
	Left,	//�����
	Right,	//�E���
	Enter,	//����
};

//���s�̎��
enum class Result
{
	None,	//�Q�[����
	Win,	//����
	Lose,	//����
	Draw,	//��������
};

//�}���J���N���X
class Mancala
{
public:
	Result result;
	KeyID GetKeyDown();
	
	Pocket pockets[14];
	int turn;

	//�R���X�g���N�^
	Mancala();

	//�f�X�g���N�^
	~Mancala();
	
};