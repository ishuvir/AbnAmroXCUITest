//
//  extensiveTest.swift
//  ReferenceiOSUITests
//
//  Created by admin on 05/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest


class extensiveTest: referenceBase {

    func testHeading(){
        givenAppIsReadyInPortrait()
        thenHeadingIsVerified()
    }
}
