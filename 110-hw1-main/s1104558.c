/*前置處理區*/
#include <stdio.h> //引用函式庫，就是一堆別人已經寫好的功能
#include <stdlib.h>
#define homework "第一次作業" //定義字串

/*全域變數宣告區*/
char *student;              //宣告字元指標變數
char content[] = "我是黃郁庭,我來自新北市,畢業於板橋高中。我的興趣有讀小說、看漫畫、聽音樂......等,至從升上大學後,也開始對投資這塊領域有興趣,也開始買書增進知識，也有跟同儕討論。我認為我自己的優點是,細心和貼心和反應很快,這些可以應用在很多方面上。希望未來大學生活會很充實。\n";  //宣告字元陣列(未宣告大小)並給值
char reason[301] = "我會就讀資管系,關鍵原因是,我高一參加了台大資管營隊,並從中學習到不少東西,也參訪許多大公司,讓我開始對未來有點憧憬,這也是我為何選讀資管系的主要原因。";  //宣告字元陣列(有宣告大小)並給值

/*程式起始執行區*/
int main(int argc, char *argv[])
{
  /*函數區域變數宣告區*/
  int year = 101;            //宣告整數變數並給值
  float ver = 1.1;           //宣告浮點數變數並給值

 /*程式執行內容*/
  if (argc == 4)
  {
    student = argv[1];    //指標變數指向該字串起始位置
    year = atoi(argv[2]); //字串轉整數
    ver = atof(argv[3]);  //字串轉浮點數
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr 與 stdout 稍有不同
    exit(1);  //結束程式將正數1值傳回給作業系統
  }
  printf("我是嘉大資管第%5d級\t", year);
  printf("%s %s\t版本 {%04.1f}\n\n", student, homework, ver);
  printf("\\自我介紹\\\n%s\n", content);
  printf("\"讀資管系的目的\"\n%s\n",reason);
}
