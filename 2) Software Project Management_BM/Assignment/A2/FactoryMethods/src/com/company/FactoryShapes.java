package com.company;

import com.company.Interface.IShapes;

public class FactoryShapes {

    public IShapes getShapes(String name){
     IShapes NumberOfShapes;
        if (name == "Circle"){
            NumberOfShapes = new Circle();
        }else if (name == "Triangle") {
            NumberOfShapes = new Triangle();
        }else if (name == "Square") {
            NumberOfShapes = new Square();
        }
        else {
            return null;
        }
        return NumberOfShapes;
    }

    public void setShapeStyle(String style, String Shape) {
        if (style == "Border") {
            (new BorderShapes()).Border(Shape);;
        } else if (style == "Colored") {
            (new ColoredShapes()).Colored(Shape);
        } else {

        }
    }
}

class Circle implements IShapes{
    @Override
    public void draw() {
        System.out.println("Circle is Draw");
    }
}
class Square implements IShapes{
    @Override
    public void draw() { System.out.println("Square is Draw"); }
}
class Triangle implements IShapes{
    @Override
    public void draw() {
        System.out.println("Triangle is Draw");
    }
}
