
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST023 NAME			    Guarda
QUEST023 POSITION			787 4058

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST023 BASE_SPEECH-1      Voce_ja_ouviu_falar_dos_Gargulas?
QUEST023 BASE_SPEECH-2      Rumores_dizem_que_seus_dentes_trazem_poderes!
QUEST023 BASE_SPEECH-3      Seja_um_dentista_por_um_dia_e_tente_extrair_esses_dentes...
QUEST023 BASE_SPEECH-4      Vai_que_voce_fica_forte_com_isso_ne?

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST023 CONDITION-1   LEVEL 201 255
QUEST023 CONDITION-1   SPEECH Ei!!!_Nivel_incorreto!
QUEST023 CONDITION-2   ISTRANS 0 1
QUEST023 CONDITION-2   SPEECH Apenas_mortais!
QUEST023 CONDITION-3   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST023 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST023 REWARD-2	0   99 TELEPORT	806 4062