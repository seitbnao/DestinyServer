
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST40 NAME			    EventNPC_6
QUEST40 POSITION			2277 3887

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST40 BASE_SPEECH-1      Me_Traga_4_Medalhas_Douradas
QUEST40 BASE_SPEECH-2      Boa_sorte

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST40 CONDITION-1   ITEM 4051 3
QUEST40 CONDITION-1   SPEECH Me_Traga_3_Medalhas_Douradas
QUEST40 CONDITION-2   ITEM 4052 3
QUEST40 CONDITION-2   SPEECH Me_Traga_3_Medalhas_roxas

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST40 REWARD-1	0   99 DELETEITEM 4051 3
QUEST40 REWARD-2	0   99 DELETEITEM 4052 3
QUEST40 REWARD-3	0   20 QITEM 567_43_1_2_50_4_99
QUEST40 REWARD-4	22  41 QITEM 567_43_1_60_12_5_99
QUEST40 REWARD-5	42  60 QITEM 567_43_1_60_12_4_99
QUEST40 REWARD-6	61  80 QITEM 567_43_1_54_10_4_99
QUEST40 REWARD-7	81  99 QITEM 485

