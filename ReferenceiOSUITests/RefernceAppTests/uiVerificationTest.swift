//
//  uiVerificationTest.swift
//  ReferenceiOSUITests
//
//  Created by Ishuvir Singh on 03/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//


import Foundation
import XCTest

class uiVerificationTest: referenceBase {
    
    func testUIScreenValidations() {
        givenAppIsReady()
        thenHelloIsDisplayed()
        thenFirstTextIsMatched(textValue: "Hello")
        thenButtonIsDisplayed()
    }

}
