#pragma once
class GamePage : public Page
{
private:

	// Summary : 親クラス
	typedef Page base;
	

public:
	// Summary : コンストラクタ
	GamePage(void);
	
	// Summary : デストラクタ
	~GamePage(void);
	
	// Summary : 初期化処理
	void Init(void);
	
	// Summary : 更新処理
	void UpData(void);
	
	// Summary : 描画処理
	void Draw(void);
	
	// Summary : リソース読み込み
	void LoadResource(void);

};


