//
//  ReferenceiOSUITests.swift
//  ReferenceiOSUITests
//
//  Created by Dunya Kirkali on 27/03/2019.
//  Copyright © 2019 ABN AMRO. All rights reserved.
//

import XCTest

class ReferenceiOSUITests: XCTestCase {

    override func setUp() {
        continueAfterFailure = false
        XCUIApplication().launch()
    }

    func testGenerate() {
        
        let app = XCUIApplication()
        app/*@START_MENU_TOKEN@*/.staticTexts["label"]/*[[".staticTexts[\"Hello\"]",".staticTexts[\"label\"]"],[[[-1,1],[-1,0]]],[0]]@END_MENU_TOKEN@*/.tap()
        
        let buttonStaticText = app/*@START_MENU_TOKEN@*/.staticTexts["Button"]/*[[".buttons[\"Button\"].staticTexts[\"Button\"]",".staticTexts[\"Button\"]"],[[[-1,1],[-1,0]]],[0]]@END_MENU_TOKEN@*/
        buttonStaticText.tap()
        app/*@START_MENU_TOKEN@*/.staticTexts["label"]/*[[".staticTexts[\"€ 99.096.350,00\"]",".staticTexts[\"label\"]"],[[[-1,1],[-1,0]]],[0]]@END_MENU_TOKEN@*/.tap()
        XCTAssertTrue(buttonStaticText.exists)
       

    }
}
