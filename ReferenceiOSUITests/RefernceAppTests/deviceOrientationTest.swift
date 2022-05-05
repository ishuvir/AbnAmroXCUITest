//
//  deviceOrientationTest.swift
//  ReferenceiOSUITests
//
//  Created by Ishuvir Singh on 04/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest

class deviceOrientationTest: referenceBase {
    
    func testChangeOrientation(){
        givenDeviceIsPortrait()
        whenDeviceChangedToLandscape()
        whenUserClickedButton()
        thenFunctionalityIsVerified()
        
    }
}
