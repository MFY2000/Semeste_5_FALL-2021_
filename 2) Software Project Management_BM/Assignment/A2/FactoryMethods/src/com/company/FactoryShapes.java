package com.company;

public class FactoryShapes {
    static IShapes[] NumberOfShapes = {new Circle(), new Triangle(), new Square()};

    IShapes getShapes(String ShapeType){
        for (var index: NumberOfShapes) {
            System.out.println(index.nameOfShape);
            if(index.nameOfShape == ShapeType){
                return index;
            }
        }
        return NumberOfShapes[0];
    }


}
class Circle extends IShapes{
    public void setNameOfShape(String nameOfShape) {
        this.nameOfShape = "Circle";
    }

    @Override
    public void draw() {
        System.out.println("Circle is Draw");
    }
}
class Square extends IShapes{
    public String nameOfShape = "Square";

    @Override
    public void draw() {
        System.out.println("Square is Draw");
    }
}
class Triangle extends IShapes{
    public String nameOfShape = "Triangle";

    @Override
    public void draw() {
        System.out.println("Triangle is Draw");
    }
}
