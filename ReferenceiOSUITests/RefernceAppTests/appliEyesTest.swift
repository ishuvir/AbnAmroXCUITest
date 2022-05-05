//
//  appliEyesTest.swift
//  ReferenceiOSUITests
//
//  Created by admin on 05/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest
import EyesXCUI

class appliEyesTest : referenceBase {
    
    func testReferenceVisual() {
        givenAppIsOpened()
        whenUserClickedButton()
        ThenEyesCapturedScreen()
           
    }
}
