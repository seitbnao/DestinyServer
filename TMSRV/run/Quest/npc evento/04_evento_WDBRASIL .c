
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST38 NAME			    Event_NPC_4
QUEST38 POSITION			1246 1710

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST38 BASE_SPEECH-1      Me_Traga_a_Medalha_Roxa
QUEST38 BASE_SPEECH-2      Meu_Irmao_Esta_Em_Um_Lugar_Branco
QUEST38 BASE_SPEECH-3      Meu_Irmao_Esta_Em_Um_Lugar_Branco

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST38 CONDITION-1   ITEM 4052 1
QUEST38 CONDITION-1   SPEECH Traga_a_Medalha_Roxa
QUEST38 CONDITION-2   ISLOG 1


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST38 REWARD-1	0   99 DELETEITEM 4052 1
QUEST38 REWARD-2	0   25 QITEM 3182_61_5
QUEST38 REWARD-3	26  49 QITEM 3461_61_10
QUEST38 REWARD-4	50  80 QITEM 4140_61_3
QUEST38 REWARD-5	81  99 QITEM 4051

