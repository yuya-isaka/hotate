#include <iostream>
#include <verilated.h>
#include "Vtop.h"
// #include <verilated_vcd_c.h> // VCD出力用のインクルードファイル
#include <verilated_fst_c.h> // FST出力用のインクルードファイルを追加

// 初期化
int time_counter = 0;
// 下のように書いてる人もいた。これが一つのメイン時間になる
// unsigned int main_time = 0;     // Current simulation time

int main(int argc, char **argv)
{

	// おまじない
	Verilated::commandArgs(argc, argv);

	// counter_4bitモジュールをインスタンス化
	Vtop *dut = new Vtop();

	// VCD波形ダンプ
	// // 波形ダンプを有効化し、波形ファイル名をsmx.vcdとしてファイルディスクリプタをオープン
	// // -- ここから
	// // Trace DUMP ON
	// Verilated::traceEverOn(true);
	// VerilatedVcdC *tfp = new VerilatedVcdC;

	// dut->trace(tfp, 100); // Trace 100 levels of hierarchy
	// tfp->open("simx.vcd");
	// // -- ここまで
	// // → これだけでは波形は生成されず、dut->eval()毎に波形ダンプ用の関数を呼び出す必要がある。

	// FST波形ダンプ
	// -- ここから
	// Trace DUMP ON
	Verilated::traceEverOn(true);
	VerilatedFstC *tfp = new VerilatedFstC;

	dut->trace(tfp, 100); // Trace 100 levels of hierarchy
	tfp->open("hotate.fst");
	// -- ここまで

	// 初期化（フォーマット）
	// dut->clk = 0;
	// dut->rst = 1;

	// // 100単位時間ほどリセット状態を保持
	// // 状態を安定させるため？
	// while (time_counter < 100)
	// {
	// 	// 回路を実行（DUTを評価）
	// 	dut->eval();
	// 	tfp->dump(time_counter); // 波形ダンプ用の記述を追加

	// 	time_counter++;
	// }

	// // リセットをリリースし、シミュレーション開始
	// // カウンターが動き出す
	// dut->rst = 0;

	// クロックサイクルの記録
	int cycle = 0;
	// 500単位時間動作させる
	// 現在time_counter==100なので残り400
	// 回路が終了していない限り、評価する（終了している場合もあるから一応）
	while (time_counter < 1000000 && !Verilated::gotFinish())
	{
		// 5単位時間に１回 clkをトグル（スイッチ）
		// ここは単位時間重視！
		// if ((time_counter % 5) == 0)
		// {
		// 	// トグル
		// 	dut->clk = !dut->clk; // Toggle clock
		// }
		// // クロックサイクルを数える
		// if ((time_counter % 10) == 0)
		// {
		// 	// Cycle Count
		// 	cycle++;
		// }
		dut->clk = !dut->clk; // Toggle clock
		cycle++;

		// 5サイクルに１回 en信号を有効化
		// 50単位時間に１回有効
		// → 400/50 = 8
		// ここはサイクル重視！
		// if (cycle % 5 == 0)
		// {
		// 	// 有効化
		// 	dut->en = 1; // Assert En
		// }
		// else
		// {
		// 	// 無効化
		// 	dut->en = 0; // Deassert En
		// }

		// 毎単位時間にDUTを評価（回路を動かす）
		dut->eval();
		tfp->dump(time_counter); // 波形ダンプ用の記述を追加

		// printf("Led Value = %d\n", dut->led);
		// printf("Seg Value = %d\n", dut->seg);
		time_counter++;
	}

	// 所定時間シミュレーションを実行すると終了し、最後に結果dut->cntを出力する
	// std::cout << "Final Counter Value = " << dut->cnt << '\n';
	// printf("Final Led Value = %d\n", dut->led);
	printf("Final Reg0 Value = %d\n", dut->reg0);
	printf("Final Reg1 Value = %d\n", dut->reg1);
	printf("Final Reg2 Value = %d\n", dut->reg2);
	printf("Final Reg3 Value = %d\n", dut->reg3);
	printf("Final Reg4 Value = %d\n", dut->reg4);
	printf("Final Reg5 Value = %d\n", dut->reg5);
	printf("Final Reg6 Value = %d\n", dut->reg6);
	printf("Final Reg7 Value = %d\n", dut->reg7);
	printf("Final Reg8 Value = %d\n", dut->reg8);
	printf("Final Reg9 Value = %d\n", dut->reg9);
	printf("Final Reg10 Value = %d\n", dut->reg10);
	printf("Final Reg11 Value = %d\n", dut->reg11);
	printf("Final Reg12 Value = %d\n", dut->reg12);
	printf("Final Reg13 Value = %d\n", dut->reg13);
	printf("Final Reg14 Value = %d\n", dut->reg14);
	printf("Final Reg15 Value = %d\n", dut->reg15);
	printf("Final Reg16 Value = %d\n", dut->reg16);
	printf("Final Reg17 Value = %d\n", dut->reg17);
	printf("Final Reg18 Value = %d\n", dut->reg18);
	printf("Final Reg19 Value = %d\n", dut->reg19);
	printf("Final Reg20 Value = %d\n", dut->reg20);
	printf("Final Reg21 Value = %d\n", dut->reg21);
	printf("Final Reg22 Value = %d\n", dut->reg22);
	printf("Final Reg23 Value = %d\n", dut->reg23);
	printf("Final Reg24 Value = %d\n", dut->reg24);
	printf("Final Reg25 Value = %d\n", dut->reg25);
	printf("Final Reg26 Value = %d\n", dut->reg26);
	printf("Final Reg27 Value = %d\n", dut->reg27);
	printf("Final Reg28 Value = %d\n", dut->reg28);
	printf("Final Reg29 Value = %d\n", dut->reg29);
	printf("Final Reg30 Value = %d\n", dut->reg30);
	printf("Final Reg31 Value = %d\n", dut->reg31);
	// printf("Final Seg Value = %d\n", dut->seg);

	// インスタンスした回路を終了させる
	dut->final();
	tfp->close(); // 波形ファイルも閉じる
}

// テンプレート
// // 必要なファイルのインクルード
// #include <iostream>
// #include <verilated.h>
// #include "Vcounter_4bit.h"

// int main(int argc, char **argv) {
//     // Verilatorのコマンド解析
//     // DUTモジュールのインスタンス化
//     // DUTモジュールのインタフェースの初期化

//     // while文 {
//     //     クロックを1サイクルずつ進めていく記述
//     //     DUTを評価（回路を実行する）記述
//     //     DUTインタフェースを評価する処理
//     // }

//     // 終了
// }