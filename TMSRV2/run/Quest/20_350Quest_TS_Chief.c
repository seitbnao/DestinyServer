
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST020 NAME			    Guarda_Aprendiz
QUEST020 POSITION			2244 1595

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST020 BASE_SPEECH-1      Voce_so_sera_reconhecido_se_conseguir_esse_manto!
QUEST020 BASE_SPEECH-2      Uma_vez_aprendiz,_sempre_aprendiz!
QUEST020 BASE_SPEECH-3      Prove_suas_forcas_e_consiga_o_manto_do_aprendiz!
QUEST020 BASE_SPEECH-4      Fale_com_o_Lider_Aprendiz_aqui_dentro!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST020 CONDITION-1   LEVEL 101 150
QUEST020 CONDITION-1   SPEECH Parado!_Voce_nao_esta_no_nivel_correto!
QUEST020 CONDITION-2   ISTRANS 0 1
QUEST020 CONDITION-2   SPEECH Parado!_Apenas_mortais!
QUEST020 CONDITION-3   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST020 REWARD-1	0   99 TELEPORT	2244 1575
QUEST020 REWARD-2	0   99 SPEECH   Boa_sorte,_guerreiro!
