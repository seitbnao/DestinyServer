
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST34 NAME			    Event_NPC_2
QUEST34 POSITION			734 3811

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST34 BASE_SPEECH-1      Me_Traga_a_Medalha_Azul
QUEST34 BASE_SPEECH-2      Meu_Irmao_Esta_Em_Um_Lugar_Quente
QUEST34 BASE_SPEECH-3      Calor_Areia_Sol_Ajude_Ele

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST34 CONDITION-1   ITEM 4054 1
QUEST34 CONDITION-1   SPEECH Traga_a_Medalha_Azul
QUEST34 CONDITION-2   ISLOG 0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST34 REWARD-1	0   99 DELETEITEM 4054 1
QUEST34 REWARD-2	0   29 QITEM 3140
QUEST34 REWARD-3	30  59 QITEM 3314
QUEST34 REWARD-4	60  85 QITEM 4020_61_3
QUEST34 REWARD-5	86  99 QITEM 4053

