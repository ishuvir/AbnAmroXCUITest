//
//  buttonFunctionTest.swift
//  ReferenceiOSUITests
//
//  Created by Ishuvir Singh on 04/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest

class buttonFunctionTest: referenceBase {
  
    func testbuttonFunctionValidation() {
        givenAppIsReady()
        andHelloIsDisplayed()
        whenUserClickedButton()
        thenHelloIsNotDisplayed(initialText: "Hello")
        thenEuroValueDisplayed(euroIcon : "€")}
 
}
