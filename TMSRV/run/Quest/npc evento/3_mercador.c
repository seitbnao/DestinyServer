
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST03 NAME			    Mercador
QUEST03 POSITION			2095 2089

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST03 BASE_SPEECH-1      Eu_troco_Bau_do_tesouro_Raro_por_brindes!
QUEST03 BASE_SPEECH-1      O_bau_voce_recebe_criando_lojinha

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST03 CONDITION-1   ITEM 486 1
QUEST03 CONDITION-1   SPEECH Me_traga_um_Bau_do_tesouro_Raro
QUEST03 CONDITION-2   ISLOG 2


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST03 REWARD-1	0   99 DELETEITEM 486 1
QUEST03 REWARD-2	0   14 QITEM 420
QUEST03 REWARD-3	15  29 QITEM 419
QUEST03 REWARD-4	30  44 QITEM 4026_61_2
QUEST03 REWARD-5	45  59 QITEM 4020
QUEST03 REWARD-6	60  74 QITEM 2406
QUEST03 REWARD-7	75  78 QITEM 4053
QUEST03 REWARD-8	79  85 QITEM 4054
QUEST03 REWARD-9	86  99 QITEM 4055