
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST41 NAME			    Event_NPC_5
QUEST41  POSITION			3486 2899

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST41  BASE_SPEECH-1      Me_Traga_a_Medalha_Dourada
QUEST41  BASE_SPEECH-3      Me_Traga_a_Medalha_Dourada
QUEST41  BASE_SPEECH-2      Me_Traga_a_Medalha_Dourada
QUEST41  BASE_SPEECH-3      Me_Traga_a_Medalha_Dourada

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST41  CONDITION-1   ITEM 4051 1
QUEST41  CONDITION-1   SPEECH Traga_a_Medalha_Dourada
QUEST41  CONDITION-2   ISLOG 0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST41  REWARD-1	0   99 DELETEITEM 4051 1
QUEST41  REWARD-2	0   25 QITEM 633
QUEST41  REWARD-3	26  60 QITEM 4043
QUEST41  REWARD-4	61  85 QITEM 5337
QUEST41  REWARD-5	86  99 QITEM 3343


