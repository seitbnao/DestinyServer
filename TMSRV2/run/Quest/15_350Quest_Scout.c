
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST015 NAME			    Guarda
QUEST015 POSITION			452 3912

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST015 BASE_SPEECH-1      Olha_quem_esta_aqui!
QUEST015 BASE_SPEECH-2      Acho_que_voce_ja_ouviu_falar_dos_Kaizen...
QUEST015 BASE_SPEECH-3      Entra_aqui_rapido!_Antes_que_seja_tarde!
QUEST015 BASE_SPEECH-4      Acho_que_posso_te_confiar_essa_batalha!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST015 CONDITION-1   LEVEL 191 265
QUEST015 CONDITION-1   SPEECH Ei_o_que_voce_esta_fazendo_aqui?_Volte_no_nivel_correto!
QUEST015 CONDITION-2   ISTRANS 0
QUEST015 CONDITION-2   SPEECH Apenas_mortais!
QUEST015 CONDITION-3   ITEM 4040 1
QUEST015 CONDITION-3   SPEECH Preciso_de_uma_Cura_do_Batedor!
QUEST015 CONDITION-4   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST015 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST015 REWARD-2	0   99 TELEPORT	467 3901
QUEST015 REWARD-3	0   99 DELETEITEM 4040 1
