package com.company;

import com.company.Interface.IShapesColors;

public class BorderShapes implements IShapesColors {

    @Override
    public void Colored(String nameOfShape) {
//        do nothings
    }

    @Override
    public void Border(String nameOfShape) {
        System.out.println("Give border to the shape of "+nameOfShape);
    }
}
