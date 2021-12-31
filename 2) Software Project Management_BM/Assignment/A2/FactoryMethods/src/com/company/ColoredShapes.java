package com.company;

import com.company.Interface.IShapesColors;

public class ColoredShapes implements IShapesColors {

    @Override
    public void Colored(String nameOfShape) {
        System.out.println("Give Colored to the shape of "+nameOfShape);
    }

    @Override
    public void Border(String nameOfShape) {
        // do nothings
    }
}

