/*�e�m�B�z��*/
#include <stdio.h> //�ޥΨ禡�w�A�N�O�@��O�H�w�g�g�n���\��
#include <stdlib.h>
#define homework "�Ĥ@���@�~" //�w�q�r��

/*�����ܼƫŧi��*/
char *student;              //�ŧi�r�������ܼ�
char content[] = "�ڬO�����x,�ڨӦ۷s�_��,���~��O�������C�ڪ����즳Ū�p���B�ݺ��e�Bť����......��,�ܱq�ɤW�j�ǫ�,�]�}�l����o����즳����,�]�}�l�R�ѼW�i���ѡA�]����P���Q�סC�ڻ{���ڦۤv���u�I�O,�ӤߩM�K�ߩM�����ܧ�,�o�ǥi�H���Φb�ܦh�譱�W�C�Ʊ楼�Ӥj�ǥͬ��|�ܥR��C\n";  //�ŧi�r���}�C(���ŧi�j�p)�õ���
char reason[301] = "�ڷ|�NŪ��ިt,�����]�O,�ڰ��@�ѥ[�F�x�j����綤,�ñq���ǲߨ줣�֪F��,�]�ѳX�\�h�j���q,���ڶ}�l�良�Ӧ��I����,�o�]�O�ڬ����Ū��ިt���D�n��]�C";  //�ŧi�r���}�C(���ŧi�j�p)�õ���

/*�{���_�l�����*/
int main(int argc, char *argv[])
{
  /*��ưϰ��ܼƫŧi��*/
  int year = 101;            //�ŧi����ܼƨõ���
  float ver = 1.1;           //�ŧi�B�I���ܼƨõ���

 /*�{�����椺�e*/
  if (argc == 4)
  {
    student = argv[1];    //�����ܼƫ��V�Ӧr��_�l��m
    year = atoi(argv[2]); //�r������
    ver = atof(argv[3]);  //�r����B�I��
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr �P stdout �y�����P
    exit(1);  //�����{���N����1�ȶǦ^���@�~�t��
  }
  printf("�ڬO�Ťj��޲�%5d��\t", year);
  printf("%s %s\t���� {%04.1f}\n\n", student, homework, ver);
  printf("\\�ۧڤ���\\\n%s\n", content);
  printf("\"Ū��ިt���ت�\"\n%s\n",reason);
}
