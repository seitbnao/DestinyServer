
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST35 NAME			    Event_NPC_1
QUEST35 POSITION			2131 2102

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST35 BASE_SPEECH-1      Me_Traga_a_Medalha_Verde
QUEST35 BASE_SPEECH-2      Meu_Irmao_Esta_Em_Uma_Dungeon
QUEST35 BASE_SPEECH-3      Hidras_Cavaleiros_Que_Medo!
QUEST35 BASE_SPEECH-4      Me_Traga_a_Medalha_Verde

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST35 CONDITION-1   ITEM 4055 1
QUEST35 CONDITION-1   SPEECH Traga_a_Medalha_Verde
QUEST35 CONDITION-2   ISLOG 0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST35 REWARD-1	0   99 DELETEITEM 4055 1
QUEST35 REWARD-2	0   40 QITEM 412_61_3
QUEST35 REWARD-3	41  69 QITEM 413_61_2
QUEST35 REWARD-5	70  79 QITEM 4019_61_4
QUEST35 REWARD-6	80  99 QITEM 4054
