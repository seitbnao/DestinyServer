
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST39 NAME			    EventNPC_7
QUEST39 POSITION			2240 3885

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST39 BASE_SPEECH-1      Me_Traga_3x_o_Bau_do_tesouro_7
QUEST39 BASE_SPEECH-2      Me_Traga_3x_o_Bau_do_tesouro_7
QUEST39 BASE_SPEECH-3      Me_Traga_3x_o_Bau_do_tesouro_7
QUEST39 BASE_SPEECH-4      Me_Traga_3x_o_Bau_do_tesouro_7


//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST39 CONDITION-1   ITEM 485 3
QUEST39 CONDITION-1   SPEECH Me_Traga_3x_o_Bau_do_tesouro_7
QUEST39 CONDITION-2   ISLOG 2


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST39 REWARD-1	0   99 DELETEITEM 485 3
QUEST39 REWARD-2	0   24 QITEM 567_43_1_2_100_4_200
QUEST39 REWARD-3	25  50 QITEM 567_43_1_60_20_5_200
QUEST39 REWARD-4	51  75 QITEM 567_43_1_60_20_4_200
QUEST39 REWARD-5	76  99 QITEM 567_43_1_54_15_4_200



