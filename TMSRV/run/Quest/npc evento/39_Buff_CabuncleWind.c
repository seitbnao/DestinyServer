
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST039 NAME			Ajudante
QUEST039 POSITION		2216 1714

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST039 BASE_SPEECH-1      Eu_vou_te_ajudar!
QUEST039 BASE_SPEECH-2      Chegue_mais_perto!
QUEST039 BASE_SPEECH-3      Darei_poderes_magicos_a_voce!
QUEST039 BASE_SPEECH-4      Existem_mais_ajudantes_como_eu!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST039 CONDITION-1   LEVEL 110 149
QUEST039 CONDITION-1   SPEECH Voce_ja_esta_muito_forte!
QUEST039 CONDITION-2   ISLOG  0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST039 REWARD-1	0   99 SPEECH    Voce_recebeu_uma_ajuda!
QUEST039 REWARD-2	0   99 SKILL  41 400
QUEST039 REWARD-3	0   99 SKILL  43 400
QUEST039 REWARD-4	0   99 SKILL  44 400
QUEST039 REWARD-5	0   99 SKILL  45 400