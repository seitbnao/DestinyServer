
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST37 NAME			    Event_NPC_3
QUEST37 POSITION			1104 1766

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST37 BASE_SPEECH-1      Me_Traga_a_Medalha_Vermelha
QUEST37 BASE_SPEECH-2      Meu_Irmao_Esta_Em_Um_Lugar_Com_Aranhas
QUEST37 BASE_SPEECH-3      Fenrir_Orc_Trent_Que_Loucura

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST37 CONDITION-1   ITEM 4053 1
QUEST37 CONDITION-1   SPEECH Traga_a_Medalha_Vermelha
QUEST37 CONDITION-2   ISLOG 0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST37 REWARD-1	0   99 DELETEITEM 4053 1
QUEST37 REWARD-2	0   25 QITEM 4140
QUEST37 REWARD-3	26  60 QITEM 777_61_5
QUEST37 REWARD-4	61  89 QITEM 3172
QUEST37 REWARD-5	90  99 QITEM 4052

