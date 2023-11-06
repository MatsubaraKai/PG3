
#include <stdio.h>

class IShape
{
public:

	virtual void Size() = 0;
	virtual void Draw() = 0;

protected: 

	float size_ = 0.0f;
};

class Circle : public IShape
{
public:

	virtual void Size() override;
	virtual void Draw() override;

public:
	
	void SetRadius(float radius) { radius_ = radius; }

private: 

	float radius_ = 0.0f;
};

class Rectangle : public IShape
{

public:

	virtual void Size() override;
	virtual void Draw() override;

public:
	
	void SetWidth(float width) { width_ = width; }
	void SetHeight(float height) { height_ = height; }

private:

	float width_ = 0.0f;
	float height_ = 0.0f;
};

void Circle::Size()
{
	float pai = 3.14f;
	size_ = radius_ * radius_ * pai;
}

void Circle::Draw()
{
	printf("円:面積%.5f\n", size_);
}

void Rectangle::Size()
{
	size_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("矩形:面積%.5f\n", size_);
}

int main() {

	Circle circle;
	circle.SetRadius(6.0f);

	Rectangle rectangle;
	rectangle.SetHeight(6.0f);
	rectangle.SetWidth(9.0f);

	// 計算
	circle.Size();
	rectangle.Size();

	// 表示
	circle.Draw();
	rectangle.Draw();

	return 0;

}